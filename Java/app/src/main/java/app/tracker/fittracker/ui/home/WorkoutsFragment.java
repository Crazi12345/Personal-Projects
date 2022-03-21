package app.tracker.fittracker.ui.home;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.lifecycle.ViewModelProvider;

import app.tracker.fittracker.databinding.FragmentWorkoutsBinding;
import app.tracker.fittracker.ui.FragmentHolder;
import app.tracker.fittracker.ui.plans.PlanGeneration;

public class WorkoutsFragment extends Fragment {
    FragmentHolder fh = FragmentHolder.object;
    private FragmentWorkoutsBinding binding;
    private Fragment f = new PlanGeneration();
    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        WorkoutsViewModel workoutsViewModel =
                new ViewModelProvider(this).get(WorkoutsViewModel.class);

        binding = FragmentWorkoutsBinding.inflate(inflater, container, false);
        View root = binding.getRoot();

            fh.removePlansFragment();
            System.out.println("arrived");


        final TextView textView = binding.textHome;
        workoutsViewModel.getText().observe(getViewLifecycleOwner(), textView::setText);
        return root;
    }

    @Override
    public void onDestroyView() {

        super.onDestroyView();
        binding = null;
    }
}