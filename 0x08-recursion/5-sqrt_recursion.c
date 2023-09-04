#include "main.h"

int _sqrt_recursion_helper(int n, int start, int end) {
	    if (start > end) {
		            return -1; // No natural square root
			        }
	        
	        int mid = start + (end - start) / 2;
		    int square = mid * mid;
		        
		        if (square == n) {
				        return mid; // Found the natural square root
					    } else if (square < n) {
						            return _sqrt_recursion_helper(n, mid + 1, end); // Search in the right half
							        } else {
									        return _sqrt_recursion_helper(n, start, mid - 1); // Search in the left half
										    }
}

int _sqrt_recursion(int n) {
	    if (n < 0) {
		            return -1; // Negative numbers don't have natural square roots
			        }
	        
	        return _sqrt_recursion_helper(n, 0, n); // Start the search from 0 to n
}



