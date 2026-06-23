class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int k = 0;
        int size = flowerbed.size();

        for(int i = 0; i < size; i++) {

            if(flowerbed[i] == 0) {

                if(i == 0) {

                    if(size == 1 || flowerbed[i + 1] == 0) {
                        flowerbed[i] = 1;
                        k++;

                        if(k >= n)
                            return true;
                    }

                }

                else if(i == size - 1) {

                    if(flowerbed[i - 1] == 0) {
                        flowerbed[i] = 1;
                        k++;

                        if(k >= n)
                            return true;
                    }

                }

                else {

                    if(flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                        flowerbed[i] = 1;
                        k++;

                        if(k >= n)
                            return true;
                    }

                }
            }
        }

        return k >= n;
    }
};
