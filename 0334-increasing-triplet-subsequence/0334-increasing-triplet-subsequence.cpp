class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int cnt = 1;
        int tab[3]= {-1,-1,-1};
        tab[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
             if (nums[i] > tab[cnt - 1])
            {
                tab[cnt] = nums[i];
                cnt++;
            }
            else
            {
                 if (cnt == 1)
                    tab[0] = min(tab[0], nums[i]);
                else if (cnt == 2)
                {
                    if (nums[i] > tab[0])
                        tab[1] = nums[i];
                    else if (nums[i] < tab[0])
                        tab[0] = nums[i];
                }
            }
            //printf ("count = %d ===== ",cnt);
            // for (int i = 0; i < 3; i++)
                //printf("%d ", tab[i]);
            //printf("\n");
            if (cnt == 3)
                return (true);
        }
        return (false);
    }
};

// 1 4 2 5 1

/*
f = 3
s = 4
f = 2

*/
// 1 5 0 4 1 3