#include <Arduino.h>
#include <LiquidCrystal.h>  

LiquidCrystal displayLCD(12, 11, 5, 4, 3, 2); //construtor (rs, enable e dados de comunicacao)

void setup() {

  displayLCD.begin(16, 2);//número de colunas e linhas

  displayLCD.print("Osvaldo Sanches");//texto

}

void loop() {

  displayLCD.setCursor(0, 1);//coluna 0 e linha 1

  displayLCD.print(millis() / 1000);//funcao que conta em mili

}

