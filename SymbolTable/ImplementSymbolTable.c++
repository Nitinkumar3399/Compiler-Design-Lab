#include<iostream>
#include<string>
#include<list>
using namespace std;

struct Node {
   string symbol, value, type;

   Node() {
      symbol = "";
      value = "";
      type = "";
   }

   Node(string _symbol, string _value, string _type) {
      symbol = _symbol;
      value = _value;
      type = _type;
   }
};

class SymbolTable {
	int BUCKET; // No. of buckets
	list<Node> *table; // Pointer to an array containing buckets

public:
	SymbolTable(int b) {
	   this->BUCKET = b;
	   table = new list<Node>[BUCKET];
   }

	void insertSymbol(); // inserts a key into hash table
	void deleteSymbol(); // deletes a key from hash table
   void searchSymbol(); // search a key in hash table

   // hash function to map values to key
	int hashFunction(string symbol) { 
      
		int key = 0;
      for(char x : symbol)
         key += (int)x;
      return key % BUCKET;
	}

	void displaySymbolTable();
};

void SymbolTable::insertSymbol() {

   string symbol, value, type;
   cout<<"\nEnter Symbol : ";
   cin>>symbol;
   cout<<"Enter its value : ";
   cin>>value;
   cout<<"Enter its type : ";
   cin>>type;

	int index = hashFunction(symbol);
	table[index].push_back(Node(symbol, value, type));
}

void SymbolTable::deleteSymbol() {
   
   string symbol;
   cout<<"\nEnter symbol to Delete: ";
   cin>>symbol;

   int index = hashFunction(symbol); // get the hash index of key

   list <Node> :: iterator i; // find the key in (index)th list
   for (i = table[index].begin(); i != table[index].end(); i++) {
	   if ((*i).symbol == symbol)
	      break;
   }

   // if key is found in hash table, remove it
   if (i != table[index].end())
   	table[index].erase(i);
   else
      cout<<"Entered symbol is Incorrect\n";
}

void SymbolTable::searchSymbol() {
   
   string symbol;
   cout<<"\nEnter symbol to search: ";
   cin>>symbol;

   int index = hashFunction(symbol); // get the hash index of key

   list <Node> :: iterator i; // find the key in (index)th list
   for (i = table[index].begin(); i != table[index].end(); i++) {
	   if ((*i).symbol == symbol)
	      break;
   }

   // if key is found in hash table, remove it
   if (i != table[index].end())
   	cout<<symbol<<" has a value : " << (*i).value<<endl;
   else
      cout<<"Entered symbol is not present in symbol table"<<endl;
}

void SymbolTable::displaySymbolTable() {

   cout<<"====== SYMBOL TABLE ======\n";
   for (int i = 0; i < BUCKET; i++) {
	   cout << "\t" << i;
      if(table[i].size() == 0) {
         cout<<" --> Empty";
      }
	   for (auto x : table[i])
	      cout << " --> " << "{ " << x.symbol<<" "<<x.value<<" "<<x.type <<" }";
      cout<<endl;
   }
   cout<<"====== ====== ===== ======\n";;
}

int main() {
   
   // array that contains keys to be mapped
   Node a[] = {{"a", "10", "int"}, {"b", "ndj", "string"}, {"c", "20", "int"}, {"d", "25,97", "float"}, {"e", "h", "char"}};

   SymbolTable h(7);

   bool cntnue = true;
   while(cntnue) {
      cout<<"======= CHOICE ======"<<endl;
      cout<<"\t1. Insert"<<endl;
      cout<<"\t2. Delete"<<endl;
      cout<<"\t3. Display"<<endl;
      cout<<"\t4. Search"<<endl;
      cout<<"\t5. Exit"<<endl;

      cout<<"Enter your choice: ";
      int choice;
      cin>>choice;

      switch (choice)
      {
         case 1:
            h.insertSymbol();
            break;
         
         case 2:
            h.deleteSymbol();
            break;

         case 3:
            h.displaySymbolTable();
            break;

         case 4:
            h.searchSymbol();
            break;

         case 5:
            cntnue = false;
            break;
      
         default:
            cntnue = false;
            break;
      }
   }

return 0;
}
