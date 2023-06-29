bool isValid(string s) {
        stack<char> record;
      for(auto i:s){
        //stack only records the open bracket  
        if(i=='(' || i=='{' || i=='[') 
          record.push(i);
        //if the current element is a close bracket
        else{
          if(!record.empty()){
            char temp=record.top();
            if( (i==')'&&temp=='(') || (i==']'&&temp=='[') || (i=='}'&&temp=='{') )
              record.pop();
            else return false;
          }
          else return false;
        }
      }
      return record.empty();