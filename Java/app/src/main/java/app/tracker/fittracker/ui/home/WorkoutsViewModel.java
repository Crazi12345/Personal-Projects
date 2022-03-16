package app.tracker.fittracker.ui.home;

import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;

public class WorkoutsViewModel extends ViewModel {

    private final MutableLiveData<String> mText;

    public WorkoutsViewModel() {
        mText = new MutableLiveData<>();
        mText.setValue("This is workout" +
                " fragment");
    }

    public LiveData<String> getText() {
        return mText;
    }
}