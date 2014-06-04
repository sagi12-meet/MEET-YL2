void setup() {
  Serial.begin(9600);
  int pushButton=2;
  pinMode(2, INPUT);
  pinMode(13, OUTPUT); 
  int a,b,c,d;
  int y=0;
  int r=0;
  int buttonState = digitalRead(pushButton);
    
  
}
// the loop routine runs over and over again forever:
  int a1,b1,c1,d1;
  int a,b,c,d;
  int y=0;
  int r=0,s=0;
  int pushButton=2;
  int buttonState = digitalRead(pushButton);
void loop() {
    while(r<4){
      buttonState = digitalRead(pushButton);
    if(buttonState==1&&r==0){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  a=y;
  r++;
  y=0;
  break;  
}
  }
    }
  

    if(buttonState==1&&r==1){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  b=y;
  r++;
  y=0;
  break;  
}
  }
      
    }

  
    if(buttonState==1&&r==2){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  c=y;
  r++;
  y=0;
  break;  
}
  }
      
    }
  
  
    if(buttonState==1&&r==3){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  d=y;
  r++;
  y=0;
  break;  
}
  }
      
    }
    }
  buttonState = digitalRead(pushButton);
    while(s<4){
      buttonState = digitalRead(pushButton);
    if(buttonState==1&&s==0){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  a1=y;
  s++;
  y=0;
  break;  
}
  }
    }
  

    if(buttonState==1&&s==1){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  b1=y;
  s++;
  y=0;
  break;  
}
  }
      
    }

  
    if(buttonState==1&&s==2){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  c1=y;
  s++;
  y=0;
  break;  
}
  }
      
    }
  
  
    if(buttonState==1&&s==3){
      while(true){
        buttonState = digitalRead(pushButton);
        if(buttonState==1){
          y++;
          delay(5);
        }
      if(buttonState==0){
  d1=y;
  s++;
  y=0;
  break;  
}
  }
      
    }
    }
  Serial.println("a1");
  Serial.println(a1);
  Serial.println("b1");
  Serial.println(b1);
  Serial.println("c1");
  Serial.println(c1);
  Serial.println("d1");
  Serial.println(d1);
  s=0;
  Serial.println("a");
  Serial.println(a);
  Serial.println("b");
  Serial.println(b);
  Serial.println("c");
  Serial.println(c);
  Serial.println("d");
  Serial.println(d);
  if((a1<=a+20&&a1>=a-20)&&(b1<=b+20&&b1>=b-20)&&(c1<=c+20&&c1>=c-20)&&(d1<=d+20&&d1>=d-20)){
    Serial.println("Good job, hacked in...");
  }
  else{
    Serial.println("Keep trying");
  }

}