package app.tracker.fittracker.ui.dashboard;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;
import androidx.lifecycle.ViewModelProvider;

import java.sql.SQLOutput;

import app.tracker.fittracker.R;
import app.tracker.fittracker.databinding.FragmentDashboardBinding;
import app.tracker.fittracker.ui.FragmentHolder;

public class DashboardFragment extends Fragment {

    private FragmentDashboardBinding binding;
    private FragmentHolder fh = FragmentHolder.object;
    public View onCreateView(@NonNull LayoutInflater inflater,
                             ViewGroup container, Bundle savedInstanceState) {
        DashboardViewModel dashboardViewModel =
                new ViewModelProvider(this).get(DashboardViewModel.class);

        binding = FragmentDashboardBinding.inflate(inflater, container, false);
        View root = binding.getRoot();
        fh.removePlansFragment();
        final TextView textView = binding.textDashboard;
        dashboardViewModel.getText().observe(getViewLifecycleOwner(), textView::setText);
        return root;
    }

    @Override
    public void onDestroyView() {
        fh.removePlansFragment();
        super.onDestroyView();
        binding = null;
    }
}