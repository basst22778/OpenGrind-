#pragma once
#include "Definitions.h"

class Dosage
{
  private:
    int eeAddress = 0;

  public:
    Dosage();
    bool singleDoseSelected = 1;
    int DoseModeSelected = 0;
    double singleDoseTime = SINGLEDOSE_DEFAULT_TIME;
    double doubleDoseTime = DOUBLEDOSE_DEFAULT_TIME;
    double specialDoseTime = SPECIALDOSE_DEFAULT_TIME;
    void writeToEEPROM();
};