package app.tracker.myapplication;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;

import android.os.Bundle;
import android.view.View;
import android.view.View.*;
import android.view.ViewConfiguration;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Fragment first = new FirstFragment();
        Fragment second = new SecondFragment();
        Button frag1 = findViewById(R.id.Frag1);
       frag1.setOnClickListener(new OnClickListener() {
           @Override
           public void onClick(View view) {
               setContentView(R.layout.fragment_first);
           }
       });

    }
}