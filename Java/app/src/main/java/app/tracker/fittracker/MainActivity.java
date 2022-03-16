package app.tracker.fittracker;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

import com.google.android.material.bottomnavigation.BottomNavigationView;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;
import androidx.navigation.NavController;
import androidx.navigation.Navigation;
import androidx.navigation.ui.AppBarConfiguration;
import androidx.navigation.ui.NavigationUI;

import app.tracker.fittracker.databinding.ActivityMainBinding;
import app.tracker.fittracker.databinding.FragmentPlansBinding;
import app.tracker.fittracker.ui.notifications.FragmentController;
import app.tracker.fittracker.ui.notifications.PlanGeneration;
import app.tracker.fittracker.ui.notifications.PlansFragment;

public class MainActivity extends AppCompatActivity implements FragmentController {

    private ActivityMainBinding binding;
    private FragmentPlansBinding plansBinding;
boolean isFirst = true;

FloatingActionButton newPlanButton;
TextView testView;
   public void change() {
   }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        BottomNavigationView navView = findViewById(R.id.nav_view);
        // Passing each menu ID as a set of Ids because each
        // menu should be considered as top level destinations.
        AppBarConfiguration appBarConfiguration = new AppBarConfiguration.Builder(
                R.id.navigation_home, R.id.navigation_dashboard, R.id.navigation_notifications, R.id.planGeneration
        )
                .build();
        NavController navController = Navigation.findNavController(this, R.id.nav_host_fragment_activity_main);
        NavigationUI.setupActionBarWithNavController(this, navController, appBarConfiguration);
        NavigationUI.setupWithNavController(binding.navView, navController);



    }



    @Override
    public void changeFragment() {

    }
}
