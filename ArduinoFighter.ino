/*
 * ArduinoFighter By FinlayDaG33k
 * Version: 0.1
 * Licensed under the "FinlayDaG33k License"
 * 
 * 
 * "THE FINLAYDAG33K LICENSE" (Revision 2), Based on the "BEERWARE LICENSE":
 * <Aroop "FinlayDaG33k" Roelofs> wrote this file.
 * As long as you retain this notice you can do whatever you want with this stuff.
 * If we meet some day, you should buy me a drink.
 * Hugs are mandatory when meeting me!
 * Aroop "FinlayDaG33k" Roelofs Can NOT be held liable for any damages done!
 */
 
 

/* Include all necessary libraries
----------*/
#include <Keyboard.h>

/* Define all pins for the inputs
  ----------*/
/* Punches */
const int bPunchL = 2; // Low Punch Button
const int bPunchM = 3; // Medium Punch Button
const int bPunchH = 4; // Heavy Punch Button
/* Kicks */
const int bKickL = 5; // Low Kick Button
const int bKickM = 6; // Medium Kick Button
const int bKickH = 7; // Heavy Kick Button
/* Joystick */
const int jUp = 21; // Joystick Up
const int jLeft = 20; // Joystick Left
const int jDown = 19; // Joystick Down
const int jRight = 18; // Joystick Right

/* Define all buttons for PC
----------*/
/* Punches */
const int kPunchL = 'q'; // Low Punch
const int kPunchM = 'w'; // Medium Punch
const int kPunchH = 'e'; // Heavy Punch
/* Kicks */
const int kKickL = 'a'; // Low Kick
const int kKickM = 's'; // Medium Kick
const int kKickH = 'd'; // Heavy Kick
/* Movement */
const int kUp = 218; // Arrow Up
const int kLeft = 216; // Arrow Left
const int kDown = 217; // Arrow Down
const int kRight = 215; // Arrow Right

/* Run the setup
----------*/
void setup() {
  /* Define all pins as inputs with the internal(?) pullup resistors
  ----------*/
  /* Punches */
  pinMode(bPunchL, INPUT_PULLUP); // Low Punch Button
  pinMode(bPunchM, INPUT_PULLUP); // Medium Punch Button
  pinMode(bPunchH, INPUT_PULLUP); // Heavy Punch Button
  /* Kicks */
  pinMode(bKickL, INPUT_PULLUP); // Low Kick Button
  pinMode(bKickM, INPUT_PULLUP); // Medium Kick Button
  pinMode(bKickH, INPUT_PULLUP); // Heavy Kick Button
  /* Joystick */
  pinMode(jUp, INPUT_PULLUP); // Joystick Up
  pinMode(jLeft, INPUT_PULLUP); // Joystick Left
  pinMode(jDown, INPUT_PULLUP); // Joystick Down
  pinMode(jRight, INPUT_PULLUP); // Joystick Right
}

/* This code will be run in a continuous loop!
  ----------*/
void loop() {
  /* Get the states of all pins
  ----------*/
  /* Punches */
  int state_bPunchL = digitalRead(bPunchL); // Low Punch Button
  int state_bPunchM = digitalRead(bPunchM); // Medium Punch Button
  int state_bPunchH = digitalRead(bPunchH); // Heavy Punch Button
  /* Kicks */
  int state_bKickL = digitalRead(bPunchL); // Low Kick Button
  int state_bKickM = digitalRead(bPunchM); // Medium Kick Button
  int state_bKickH = digitalRead(bPunchH); // Heavy Kick Button
  /* Joystick */
  int state_jUp = digitalRead(jUp); // Joystick Up
  int state_jLeft = digitalRead(jLeft); // Joystick Left
  int state_jDown = digitalRead(jDown); // Joystick Down
  int state_jRight = digitalRead(jRight); // Joystick Right

  /* Press the buttons on PC!
  ----------*/
  /* Punches: Low */
  if(state_bPunchL == LOW){
    Keyboard.press(kPunchL);
  }else{
    Keyboard.release(kPunchL);
  }
  /* Punches: Medium */
  if(state_bPunchM == LOW){
    Keyboard.press(kPunchM);
  }else{
    Keyboard.release(kPunchM);
  }
  /* Punches: Heavy */
  if(state_bPunchH == LOW){
    Keyboard.press(kPunchH);
  }else{
    Keyboard.release(kPunchH);
  }
  
  /* Kicks: Low */
  if(state_bKickL == LOW){
    Keyboard.press(kKickL);
  }else{
    Keyboard.release(kKickL);
  }
  /* Kicks: Medium */
  if(state_bKickM == LOW){
    Keyboard.press(kKickM);
  }else{
    Keyboard.release(kKickM);
  }
  /* Kicks: Heavy */
  if(state_bKickH == LOW){
    Keyboard.press(kKickH);
  }else{
    Keyboard.release(kKickH);
  }

  /* Joystick: Up */
  if(state_jUp == LOW){
    Keyboard.press(kUp);
  }else{
    Keyboard.release(kUp);
  }
  /* Joystick: Left */
  if(state_jLeft == LOW){
    Keyboard.press(kLeft);
  }else{
    Keyboard.release(kLeft);
  }
  /* Joystick: Down */
  if(state_jDown == LOW){
    Keyboard.press(kDown);
  }else{
    Keyboard.release(kDown);
  }
  /* Joystick: Right */
  if(state_jRight == LOW){
    Keyboard.press(kRight);
  }else{
    Keyboard.release(kRight);
  }
}
