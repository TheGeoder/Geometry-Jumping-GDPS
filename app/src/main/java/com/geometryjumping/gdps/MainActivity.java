package com.geometryjumping.gdps;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import android.view.Gravity;

public class MainActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        TextView text = new TextView(this);
        text.setText("Geometry Jumping GDPS\nStarting...");
        text.setGravity(Gravity.CENTER);
        text.setTextSize(24);

        setContentView(text);
    }
}
