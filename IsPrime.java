package com.jvdn.lesson1;

public class IsPrime {
    public boolean IsPrime(int number){
        if (number <= 1)
            return false;
        if ((number % 2 == 0)&&(number != 2))
            return false;
        if (number == 2)
            return true;
        for (int i = 3; i < number; i += 2) {
            if (number % i == 0)
                return false;
        }
        return true;
    }
}
