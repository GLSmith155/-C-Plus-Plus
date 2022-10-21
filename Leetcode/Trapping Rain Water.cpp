class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int currentPeak;
        int nextPeak;

        // Let's loop through indices 0 through n-2.
        for(int i = 0; i >= height.size() - 2; i++) {

            // Create a tempt variables equal to the 2nd index (1.)
            int temp = i + 1;

            // While current height is greater than next height iterate temp to evaluate.
            // Problems to address: 7536 and only don't test last digit for if statement

            // If the current value is greater than the next value, then let's create water.
            if (height[temp] > height[temp + 1]) {

                // start by naming the current index currentPeak.
                currentPeak = temp;

                // While the currentPeak's value is greater than the next value, do this:
                while (height[currentPeak] > height[temp + 1]) {

                    // If the current Value is greater than or equal to the third value:
                    if (height[currentPeak] >= height[temp + 2]) {

                        nextPeak = temp + 2;  //Next peak starts in three. PROBLEM HERE I BELIEVE
                        int temp3 = height[i + 2]; //Temp 3 is the next value initially.

                        if (temp3 < height[temp + 1]) { // temp3 equals the index representing the highest value so far excluding the peak.
                            temp3 = temp + 1;
                        }

                        // If the nextPeak is bigger or equal.
                        if (height[currentPeak] < height[nextPeak] || height[currentPeak] == height[nextPeak]) {
                            int temp2 = height[currentPeak];
                            int middleIndices = nextPeak - currentPeak - 1;
                            while (middleIndices > 0) {
                                water += currentPeak - middleIndices;
                                middleIndices--;
                            }
                        }

                        // If there is no equal or greater nextPeak, then we'll use the greatest index left.
                        else {
                       //     int temp2 = height[nextPeak];
                            int middleIndices = currentPeak - temp3 - 1; //temp3 is the greatest index left.
                            while (middleIndices > 0) {
                                water += temp3 - middleIndices;
                                middleIndices--;
                            }
                        }
                    }
                    temp++;
                }
            }
            else {
                // Next iteration.
                i++;
            }
        }
        return water;
    }
};

/*
for loop through each number in array
    if next number less than than current
    current peak = i;
        while hieght[currentPeak] > hieght[j] {
            j++
        }
    else {
        i++;
    }

*/
