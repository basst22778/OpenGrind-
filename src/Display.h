#pragma once

class Adafruit_SH1106G;

class Display
{
  private:
    Adafruit_SH1106G* display;

  public:
    Display();
    void printSingleDose();
    void printDoubleDose();
    void printSpecialDose();
    void printTime(double time);
    void printStatistics(int numberSingles, int numberDoubles);
};