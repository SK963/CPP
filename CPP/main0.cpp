 int health(vector<int>path)
    {
        int ahp = 0; // my health while traversing path
        int mhp = 0; // minimum health required to reach end of the path
        int sum;

         for(auto v : path)
         {
             sum += v;
             if(v >= 0) // the next room is friendly
             {
                 ahp += v; // increase ahp
             }
             else // the next room is deadly
             {
                 if(ahp > abs(v)) // sufficient health 
                 {
                     ahp += v; //decrease the ahp
                 }
                 else // unsufficient health
                 {
                     mhp += abs(abs(v) - aph) + 1); // minimum health requrired
                     aph += mph - sum;
                 }

              }

         }
         return mhp;

    }

     

    int calculateMinimumHP(vector<vector<int>>& dungeon) 
    {
        signed health = 0;
        int damage = 0;

        vector<int> path;
        

        int i = 0;
        int j = 0;
        path.push_back(arr[i][j]);

    while(i < dungeon.size() && j< dungeon[0].size())
     {   
        if(dungeon[i+1][j]) // right available
            {
                if(dungeon[i][j+1]) // downwards available
                {
                    if(dungeon[i+1][j] > dungeon[i][j+1]) // right is greater
                        {
                            j++;
                            path.push_back(dungeon[i][j]);

                        }    
                    else //down is greater
                    {
                        i++;
                        path.push_back(dungeon[i][j]); 
                    }    

                }
                else   //  down not available
                {
                    j++;
                    path.push_back(dungeon[i][j])
                    
                }
            }
            else // right not available 
            {
                if(arr[i][j+1]) // down available
                {
                    i++;
                    path.push_back(arr[i][j]);
                }
                else // down not available
                {
                   return health(path);
                }

            }
        
    }