package app.tracker.fittracker.ui.notifications;

import androidx.lifecycle.LiveData;
import androidx.lifecycle.MutableLiveData;
import androidx.lifecycle.ViewModel;

public class PlansViewModel extends ViewModel {

    private final MutableLiveData<String> mText;

    public PlansViewModel() {
        mText = new MutableLiveData<>();
        mText.setValue("This is plans fragment");

    }

    public LiveData<String> getText() {
        return mText;
    }
}