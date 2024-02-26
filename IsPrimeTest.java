package com.jvdn.lesson1;

import static org.junit.Assert.*;

public class IsPrimeTest {

    @org.junit.Test
    public void isPrime() {
        IsPrime prime = new IsPrime();
        boolean val = prime.IsPrime(5);
        boolean expected = true;
        assertEquals(val, expected);
        val = prime.IsPrime(5);
        assertEquals(val, expected);
        val = prime.IsPrime(3);
        assertEquals(val, expected);
        expected = false;
        val = prime.IsPrime(-1);
        assertEquals(val, expected);
        val = prime.IsPrime(0);
        assertEquals(val, expected);
        val = prime.IsPrime(1);
        assertEquals(val, expected);
        val = prime.IsPrime(10);
        assertEquals(val, expected);
    }
}