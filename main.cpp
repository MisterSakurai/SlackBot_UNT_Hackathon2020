#include <iostream>
using namespace std;

class Objective{
    
    
    private:
    char** ObjectiveName;
    char** ObjectiveText;
    unsigned int amountA;
    
    
    public:
    Objective(){};
    Objective(char** inName, char** inText, unsigned int inAmountA){
        ObjectiveName=inName;
        
    };
    ~Objective();

};

class ObjectiveList{
    
    
    
};

class Team{
    
    
    private:
        char* TeamName;
        double TeamScore;
        ObjectiveList TeamListOfObjectives; 
    public:
        
        Team();
        Team(char*,const double, const ObjectiveList);
    
        
};

int main() {
    
    
    
	return 0;
}
