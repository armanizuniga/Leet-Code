import unittest

from max_consecutive_ones import max_number_of_ones

class TestMax(unittest.TestCase):
	
	def test_basic(self):
		testcase = [1,0,0,1,1,1,1,0]
		expected = 4
		self.assertEqual(max_number_of_ones(testcase), expected)

#Run the tests
unittest.main()
