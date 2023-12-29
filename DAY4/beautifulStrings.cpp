int makeBeautiful(string str) {
	// Write your code here
	int n = str.length();

    // 'T1' denotes the difference between values at indices in 'STR' and the possible beautiful string starting with 0 
    // 'T2' denotes the difference between values at indices in 'STR' and the possible beautiful string starting with 1
    // 'S1' and 'S2' denote the expected value at index 'i' in both of the possible beautiful strings 
    int t1 = 0, t2 = 0;
    char s1 = '0', s2 = '1';

    for (int i = 0; i < n; i++) 
    {
        // Iterate over the string 
        if (str[i] == '1') 
        {
            if (s1 == '0') 
            {
                t1++;
            }
            else {
                t2++;
            }
        }

        // If 'STR[i]' == 0
        else 
        {
            if (s1 == '1') 
            {
                t1++;
            }
            else 
            {
                t2++;
            }
        }
        
        // If 'S1' == '0' then make it 1 and vise versa do the same for 'S2'
        if (s1 == '1') 
        {
            s1 = '0';
            s2 = '1';
        }
        else 
        {
            s1 = '1';
            s2 = '0';
        }
    }
    
    // Return the minimum of 'T1' and 'T2'
    return min(t1, t2);
}
