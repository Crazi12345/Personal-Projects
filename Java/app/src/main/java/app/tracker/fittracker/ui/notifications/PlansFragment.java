package app.tracker.fittracker.ui.notifications;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;
import androidx.lifecycle.ViewModelProvider;

import com.google.android.material.floatingactionbutton.FloatingActionButton;

import app.tracker.fittracker.R;
import app.tracker.fittracker.databinding.FragmentPlansBinding;
import app.tracker.fittracker.ui.FragmentHolder;
import app.tracker.fittracker.ui.plans.PlanGeneration;

public class PlansFragment extends Fragment  {
    private FragmentPlansBinding binding;
FragmentController fragmentController;
FragmentHolder fh = FragmentHolder.object;

    private FloatingActionButton newPlanButton;
    private TextView testView;
    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        PlansViewModel plansViewModel =
                new ViewModelProvider(this).get(PlansViewModel.class);

        binding = FragmentPlansBinding.inflate(inflater, container, false);

        View root = binding.getRoot();
        final TextView textView = binding.textNotifications;
        plansViewModel.getText().observe(getViewLifecycleOwner(), textView::setText);
        newPlanButton = binding.newPlanButton;
        testView = binding.testView;

        fh.removePlansFragment();
        newPlanButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                testView.setText("Gains");
                FragmentTransaction ft  = getParentFragmentManager().beginTransaction();
                fh.newPlansfragment();
                ft.replace(R.id.nav_host_fragment_activity_main,fh.getPlansFragment());
                ft.commit();
            }
        });

        return root;

    }



    @Override
    public void onDestroyView() {
        /*FragmentTransaction ft  = getParentFragment().getChildFragmentManager().beginTransaction();
        Fragment f = new PlanGeneration();
        ft.remove(getFragment());
        ft.commit();*/
        super.onDestroyView();
        binding = null;
    }


}