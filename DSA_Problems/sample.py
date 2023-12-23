# Function to test
def add(a, b):
    return a + b

# Test case 1
if add(1, 2) == 3:
    print("Test case 1 passed")
else:
    print("Test case 1 failed")

# Test case 2
if add(0, 0) == 0:
    print("Test case 2 passed")
else:
    print("Test case 2 failed")

# Test case 3
if add(-1, 1) == 0:
    print("Test case 3 passed")
else:
    print("Test case 3 failed")