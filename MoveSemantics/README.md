# Move Semantics :- 

    1. Move semantics resolve aroud the idea of tranfering the ownership of resource instead of transering them.
    2. They increse performance, safety and readability of libraries and applications
              ex : vector <data> v0;
                   vector <data> v1 = v0;
                   
              c++11:-
                  vector <data> v0;
                  vector <data> v1 = move(v0);
                  
    # l value :- 
       1. can appear on left side of assignment operator.
       2. can take its address.
       3. can bind it to l value reference.
       
       
    
   
