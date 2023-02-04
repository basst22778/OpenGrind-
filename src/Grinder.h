#pragma once

class Grinder
{  
    private:
        int eeAddress = 100;
        unsigned long targetTime = 0;

    public:
        Grinder();
        bool startBtnPressed();
        int getSingleDoseStats();
        int getDoubleDoseStats();
        void increaseShotCounter(int doseMode);
        void resetStats();
        unsigned long getTargetTime();
        void on(double targetTime);
        void off();
};