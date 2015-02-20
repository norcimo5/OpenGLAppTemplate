package com.example.openglapptemplate;

import com.example.openglapptemplate.GameView;

import android.os.Bundle;
import android.app.Activity;

public class MainActivity extends Activity
{
    GameView mView;

    @Override protected void onCreate( Bundle savedInstanceState ) 
    {
        super.onCreate( savedInstanceState );
        mView = new GameView( getApplication() );
        setContentView( mView );
    }

    @Override protected void onPause() 
    {
        super.onPause();
        mView.onPause();
    }

    @Override protected void onResume() 
    {
        super.onResume();
        mView.onResume();
    }
    
    @Override protected void onDestroy() 
    {
        super.onDestroy();
        mView.onDestroy();
    }
}
