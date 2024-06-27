# TimeClass

Q1:
Create class Time which contains:
- hour (int)
- min (int)
- sec (int)
- Default & parameterized constructors
- Setters & getters for each attribute
- Overload ++ (prefix operator) which increase seconds by 1 .
o You should handle all cases correctly , E.g. :
o If time is (23:59:59) it will be (0,0,0)
- Overload -- (prefix operator) which decrease seconds by 1 .
o You should handle all cases correctly , E.g. :
o If time is (0,0,0) it will be (23:59:59)
- Overload << to print Time as following format :
o Hour:min:sec
o E.g. 10:55:30
- Your main should be as follow :
Time t(0,0,0);
--t;
cout<<t;
++t;
cout<<t;
- output :
23:59:59
0:0:0
