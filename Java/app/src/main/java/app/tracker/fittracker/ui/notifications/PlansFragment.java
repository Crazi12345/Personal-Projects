package app.tracker.fittracker.ui.notifications;

import android.app.Activity;
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

import app.tracker.fittracker.MainActivity;
import app.tracker.fittracker.R;
import app.tracker.fittracker.databinding.FragmentPlansBinding;

public class PlansFragment extends Fragment  {
    private FragmentPlansBinding binding;
FragmentController fragmentController;

    private Fragment f = new PlanGeneration();
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


        newPlanButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                testView.setText("Gains");
                FragmentTransaction ft  = getParentFragmentManager().beginTransaction();

                ft.replace(R.id.nav_host_fragment_activity_main,getFragment());
                ft.commit();
            }
        });

        return root;

    }
    public Fragment getFragment(){
        return f;
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