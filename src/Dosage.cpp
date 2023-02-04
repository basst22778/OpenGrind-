#include <Dosage.h>
#include <EEPROM.h>

Dosage::Dosage() {
    EEPROM.get(eeAddress, singleDoseTime);
    EEPROM.get(eeAddress + sizeof(double), doubleDoseTime);
    EEPROM.get(eeAddress + 2 * sizeof(double), specialDoseTime);
    singleDoseTime = singleDoseTime == 0.0 ? SINGLEDOSE_DEFAULT_TIME : singleDoseTime;
    doubleDoseTime = doubleDoseTime == 0.0 ? DOUBLEDOSE_DEFAULT_TIME : doubleDoseTime;
    specialDoseTime = specialDoseTime ==0.0 ? SPECIALDOSE_DEFAULT_TIME : specialDoseTime;
}
void Dosage::writeToEEPROM() {
    EEPROM.put(eeAddress, singleDoseTime);
    EEPROM.put(eeAddress + sizeof(double), doubleDoseTime);
    EEPROM.put(eeAddress + 2 * sizeof(double), specialDoseTime);

}