import unittest
import Prime

class MyTestCase(unittest.TestCase):
    def test_IsPrime(self):
        self.assertEqual(Prime.IsPrime(1), False)
        self.assertEqual(Prime.IsPrime(-1), False)
        self.assertEqual(Prime.IsPrime(0), False)
        self.assertEqual(Prime.IsPrime(5), True)
        self.assertEqual(Prime.IsPrime(3), True)
        self.assertEqual(Prime.IsPrime(10), False)


if __name__ == '__main__':
    unittest.main()
