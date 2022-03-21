package app.tracker.fittracker.ui.plans;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.databinding.DataBindingUtil;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;
import androidx.lifecycle.ViewModelProvider;
import android.os.Bundle;

import androidx.fragment.app.Fragment;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import java.util.EventListener;

import app.tracker.fittracker.R;
import app.tracker.fittracker.databinding.FragmentPlanGenerationBinding;
import app.tracker.fittracker.ui.FragmentHolder;


public class PlanGeneration extends Fragment {

//button = binding.button;
    Button button;
    TextView textView;
    FragmentPlanGenerationBinding binding;
    private FragmentHolder fh = FragmentHolder.object;
    // the fragment initialization parameters, e.g. ARG_ITEM_NUMBER

    private String mParam1;
    private String mParam2;

    public PlanGeneration() {
        // Required empty public constructor
        System.out.println("generated");
    }





    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);


      /*  button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                FragmentTransaction ft  = getParentFragment().getChildFragmentManager().beginTransaction();
                Fragment f = new DashboardFragment();
                ft.replace(R.id.nav_host_fragment_activity_main,f);
                ft.commit();
            }
        });*/
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        binding = FragmentPlanGenerationBinding.inflate(inflater, container, false);
        //set variables in Binding
        button = binding.button;
        textView = binding.textView;

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                textView.setText("I's Time for gains");
                System.out.println("am here fool");
            }
        });

        return binding.getRoot();
    }
public void clickerHandler(EventListener e){

}

    @Override
    public void onDestroyView() {
      //  fh.removePlansFragment();
        System.out.println("Plans Generation Destroyed");
        super.onDestroyView();
        binding = null;
    }

}