#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

int buttonApin = 12;  
int buttonBpin = 9;
int buttonCpin = 6;
int buttonDpin = 3;
int buttonEpin = A0;
int buttonFpin = A4;

int ledpin1 = 11; int stateLED1 = LOW; int stateButton1; int previous1 = LOW; 
int ledpin2 = 8; int stateLED2 = LOW; int stateButton2; int previous2 = LOW; 
int ledpin3 = 5; int stateLED3 = LOW; int stateButton3; int previous3 = LOW; 
int ledpin4 = 2; int stateLED4 = LOW; int stateButton4; int previous4 = LOW; 
int ledpin5 = A1; int stateLED5 = LOW; int stateButton5; int previous5 = LOW; 
int ledpin6 = A5; int stateLED6 = LOW; int stateButton6; int previous6 = LOW; 

long time = 0;
long debounce = 200;


void setup() {
  
MIDI.begin (); 

pinMode(buttonApin, INPUT_PULLUP); 
pinMode(buttonBpin, INPUT_PULLUP);
pinMode(buttonCpin, INPUT_PULLUP);
pinMode(buttonDpin, INPUT_PULLUP);
pinMode(buttonEpin, INPUT_PULLUP);
pinMode(buttonFpin, INPUT_PULLUP);

pinMode(ledpin1, OUTPUT);
pinMode(ledpin2, OUTPUT);
pinMode(ledpin3, OUTPUT);
pinMode(ledpin4, OUTPUT);
pinMode(ledpin5, OUTPUT);
pinMode(ledpin6, OUTPUT);

}

void loop() {

static bool buttonAvalueOld = HIGH;
static bool buttonBvalueOld = HIGH;
static bool buttonCvalueOld = HIGH;
static bool buttonDvalueOld = HIGH;
static bool buttonEvalueOld = HIGH;
static bool buttonFvalueOld = HIGH;


bool buttonAvalueNew = digitalRead(buttonApin);
bool buttonBvalueNew = digitalRead(buttonBpin);
bool buttonCvalueNew = digitalRead(buttonCpin);
bool buttonDvalueNew = digitalRead(buttonDpin);
bool buttonEvalueNew = digitalRead(buttonEpin);
bool buttonFvalueNew = digitalRead(buttonFpin);




 if (buttonAvalueNew != buttonAvalueOld){
      if (buttonAvalueNew == LOW){
        
      MIDI.sendNoteOn(60, 127, 1);
      stateButton1 = digitalRead(buttonAvalueNew);  
      if(stateButton1 == HIGH && previous1 == LOW && millis() - time > debounce) {
      if(stateLED1 == HIGH)
      {
      stateLED1 = LOW; 
      } 
      else 
      {
       stateLED1 = HIGH; 
       }
       time = millis();
       }
       digitalWrite(ledpin1, stateLED1);
       previous1 == stateButton1;
                                                                                                        
      }
      else {
      MIDI.sendNoteOff(60, 0, 1);
                                                       
      }
      buttonAvalueOld = buttonAvalueNew;
    }


     if (buttonBvalueNew != buttonBvalueOld){
      if (buttonBvalueNew == LOW){
      MIDI.sendNoteOn(61, 127, 1);
      stateButton2 = digitalRead(buttonBvalueNew);  
      if(stateButton2 == HIGH && previous2 == LOW && millis() - time > debounce) {
      if(stateLED2 == HIGH)
      {
      stateLED2 = LOW; 
      } 
      else 
      {
       stateLED2 = HIGH; 
       }
       time = millis();
       }
       digitalWrite(ledpin2, stateLED2);
       previous2 == stateButton2;
     
      
      }                       
      else {
      MIDI.sendNoteOff(61, 0, 1);
                                                    
      }
      buttonBvalueOld = buttonBvalueNew;
    }


    if (buttonCvalueNew != buttonCvalueOld){
      if (buttonCvalueNew == LOW){
      MIDI.sendNoteOn(62, 127, 1);
      stateButton3 = digitalRead(buttonCvalueNew);  
      if(stateButton3 == HIGH && previous3 == LOW && millis() - time > debounce) {
      if(stateLED3 == HIGH)
      {
      stateLED3 = LOW; 
      } 
      else 
      {
       stateLED3 = HIGH; 
       }
       time = millis();
       }
       digitalWrite(ledpin3, stateLED3);
       previous3 == stateButton3;
   
                                                           
      }
      else {
      MIDI.sendNoteOff(62, 0, 1);
                                                         
      }
      buttonCvalueOld = buttonCvalueNew;
    }



    if (buttonDvalueNew != buttonDvalueOld){
      if (buttonDvalueNew == LOW){
      MIDI.sendNoteOn(63, 127, 1);
      stateButton4 = digitalRead(buttonDvalueNew);  
      if(stateButton4 == HIGH && previous4 == LOW && millis() - time > debounce) {
      if(stateLED4 == HIGH)
      {
      stateLED4 = LOW; 
      } 
      else 
      {
       stateLED4 = HIGH; 
       }
       time = millis();
       }
       digitalWrite(ledpin4, stateLED4);
       previous4 == stateButton4;
   
                                                           
      }
      else {
      MIDI.sendNoteOff(63, 0, 1);
                                                         
      }
      buttonDvalueOld = buttonDvalueNew;
    }



    if (buttonEvalueNew != buttonEvalueOld){
      if (buttonEvalueNew == LOW){
      MIDI.sendNoteOn(64, 127, 1);
        stateButton5 = digitalRead(buttonEvalueNew);  
      if(stateButton5 == HIGH && previous5 == LOW && millis() - time > debounce) {
      if(stateLED5 == HIGH)
      {
      stateLED5 = LOW; 
      } 
      else 
      {
       stateLED5 = HIGH; 
       }
       time = millis();
       }
       digitalWrite(ledpin5, stateLED5);
       previous5 == stateButton5;
                                             
      }
      else {
      MIDI.sendNoteOff(64, 0, 1);
                                                         
      }
      buttonEvalueOld = buttonEvalueNew;
    }



    if (buttonFvalueNew != buttonFvalueOld){
      if (buttonFvalueNew == LOW){
      MIDI.sendNoteOn(65, 127, 1);
        stateButton6 = digitalRead(buttonFvalueNew);  
      if(stateButton6 == HIGH && previous6 == LOW && millis() - time > debounce) {
      if(stateLED6 == HIGH)
      {
      stateLED6 = LOW; 
      } 
      else 
      {
       stateLED6 = HIGH; 
       }
       time = millis();
       }
       digitalWrite(ledpin6, stateLED6);
       previous6 == stateButton6;
     
                                                           
      }
      else {
      MIDI.sendNoteOff(65, 0, 1);
                                                         
      }
      buttonFvalueOld = buttonFvalueNew;
    }
    
delay(25);
}
