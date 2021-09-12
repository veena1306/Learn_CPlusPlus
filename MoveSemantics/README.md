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
       
       
    # summary :- 

      1. l values can appear on the left side of in-built assignment operator, r values can't.
      2. non-const l value references can only bind to l values.
      3. non-const r value references can only bind to r values.
      
      
      
      
# rvalues :- 
     1. A r value represents an temporary object that has no identity, we can assume that the r value is ready to give away ownership of its resources.
     2. 
