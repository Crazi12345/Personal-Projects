package app.tracker.fittracker.ui;

import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;

import app.tracker.fittracker.ui.dashboard.DashboardFragment;
import app.tracker.fittracker.ui.home.WorkoutsFragment;
import app.tracker.fittracker.ui.plans.ExerciseFragment;
import app.tracker.fittracker.ui.plans.PlanGeneration;
import app.tracker.fittracker.ui.notifications.PlansFragment;

public class FragmentHolder {

    Fragment plansGeneration;
    Fragment dashboard;
    Fragment plans;
    Fragment workouts;
    Fragment exercise;
    public static final FragmentHolder object = new FragmentHolder();

    private FragmentHolder() {

        plansGeneration = new PlanGeneration();
        dashboard = new DashboardFragment();
        plans = new PlansFragment();
        workouts = new WorkoutsFragment();
        exercise = new ExerciseFragment();
    }

    public FragmentHolder getInstance() {
        return object;
    }
    public void newPlansfragment(){

        plansGeneration = new PlanGeneration();

    }
    public Fragment getPlansFragment() {
        return plansGeneration;
    }
    public void removePlansFragment(){
        if(!plansGeneration.isVisible()){return;}
        FragmentTransaction ft  = plansGeneration.getParentFragmentManager().beginTransaction();
        ft.remove(getPlansFragment());
        ft.commit();
    }
}
