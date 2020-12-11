#include<iostream>
#include<assert.h>
using namespace std;

// Home Work 1

//class MyString {
//private:
//	char* text;
//	size_t length;
//public:
//	MyString() :text(nullptr), length(0) {}
//	MyString(const char* text)
//	{
//		setText(text);
//	}
//	MyString(const MyString& old)
//	{
//		setText(old.text);
//	}
//	MyString& operator=(const MyString& old)
//	{
//		setText(old.text);
//		return *this;
//	}
//	char* getText() const
//	{
//		return text;
//	}
//	void setText(const char* text)
//	{
//		this->text = _strdup(text);
//		setLength(strlen(text));
//	}
//	size_t getLength() const {
//		return length;
//	}
//	void setLength(size_t length)
//	{
//		this->length = length;
//	}
//	void append(const char* s)
//	{
//		size_t newSize = getLength() + strlen(s);
//		char* temp = new char[newSize + 1];
//		for (size_t i = 0; i <getLength() ; i++)
//		{
//			temp[i] = getText()[i];
//		}
//		for (size_t i  = getLength(),j=0; i<newSize+1;j++, i++)
//		{
//			temp[i] = s[j];
//		}
//		delete[]text;
//		text = temp;
//		temp = nullptr;
//		setLength(newSize);
//	}
//	void sort(bool reverse = false)
//	{
//		if (reverse)
//		{
//			for (size_t i = 0; i < getLength() - 1; i++)
//			{
//				bool swapped = false;
//				for (size_t k = 1; k < getLength() - i; k++)
//				{
//					if (text[k - 1] < text[k])
//					{
//						swap(text[k - 1], text[k]);
//						swapped = true;
//						/*char temp = text[k];
//						text[k] = text[k + 1];
//						text[k + 1] = temp;*/
//					}
//				}
//				if (!swapped) {
//					break;
//				}
//			}
//		}
//		else
//		{
//			for (size_t i = 0; i < getLength() - 1; i++)
//			{
//				bool swapped = false;
//				for (size_t k = 1; k < getLength() - i; k++)
//				{
//					if (text[k - 1] > text[k])
//					{
//						swap(text[k - 1], text[k]);
//						swapped = true;
//						/*char temp = text[k];
//						text[k] = text[k + 1];
//						text[k + 1] = temp;*/
//					}
//				}
//				if (!swapped)
//				{
//					break;
//				}
//			}
//		}
//	}
//	char firstchar()
//	{
//		return text[0];
//	}
//	char lastchar()
//	{
//		return text[getLength()-1];
//	}
//	char* substr(int first,int last=0)
//	{
//		if (last != 0)
//		{
//			char* temp=new char[last-first-1];
//			for (size_t i = first,j=0; i < last;j++, i++)
//			{
//				temp[j] = text[i];
//				temp[j + 1] = '\0';
//			}
//			return temp;
//		}
//		else
//		{
//			char* temp = new char[first - 1];
//			for (size_t i = 0; i < first; i++)
//			{
//				temp[i] = text[i];
//				temp[i + 1] = '\0';
//			}
//			return temp;
//		}
//	}
//	int find(char chr)
//	{
//		for (size_t i = 0; i < getLength(); i++)
//		{
//			if (text[i] == chr)
//				return i;
//		}
//		return -1;
//	}
//	void clear()
//	{
//		text = nullptr;
//		delete[]text;
//	}
//	~MyString()
//	{
//		delete[]text;
//	}
//};
//
//
//int  main() {
//
//	//1.
//
//	/*MyString s("I am a developer");
//	cout << s.getText() << endl;
//	s.append(". I am 21 years old");
//	cout << s.getText() << endl;*/
//
//	//2.
//
//	/*MyString letters("VHSBVDJVJFSHFVBDJSASAAS");
//	cout << letters.getText() << endl;
//	letters.sort(true);
//	cout << letters.getText() << endl;*/
//
//	//3.
//
//	/*MyString string("Hello World");
//	cout << string.getText() << endl;
//	cout << string.firstchar() << endl;*/
//
//	//4.
//
//	/*MyString string("Hello World");
//	cout << string.getText() << endl;
//	cout << string.lastchar() << endl;*/
//
//	//5.
//
//	/*MyString string("Hello world");
//	cout << string.getText() << endl;
//	cout << string.substr(7) << endl;
//	cout << string.substr(3, 9) << endl;*/
//
//	//6.
//
//	/*MyString string("Hello world");
//	cout << string.getText() << endl;
//	cout << string.find('a') << endl;*/
//
//	//7.
//
//	/*MyString string("Hello world");
//	cout << string.getText() << endl;
//	string.clear();*/
//
//	return 0;
//}

// Home Work 2

//class IntArray
//{
//private:
//	int* arr;
//	size_t size;
//public:
//	IntArray() :arr(nullptr), size(0){}
//	IntArray(int* arr,size_t size)
//	{
//		setSize(size);
//		setArray(arr);
//	}
//	int operator[](int index)
//	{
//		return arr[index];
//	}
//	IntArray& operator=(const IntArray&old)
//	{
//		setSize(old.size);
//		int* temp = new int[size];
//		for (size_t i = 0; i < size; i++)
//		{
//			temp[i] = old.arr[i];
//		}
//		delete[]arr;
//		arr = temp;
//		temp = nullptr;
//		//setArray(old.arr)<- niye error verir??
//		return *this;
//	}
//	IntArray& operator()(int index,int data)
//	{
//		arr[index] = data;
//		return *this;
//	}
//	void setArray(int* arr)
//	{
//		assert(arr != nullptr);
//    	this->arr = arr;
//	}
//	int* getArray()const
//	{
//		return arr;
//	}
//	void setSize(size_t size)
//	{
//		assert(size > 0);
//		this->size = size;
//	}
//	size_t getSize()const
//	{
//		return size;
//	}
//	void addFirst(int data)
//	{
//		int* temp=new int[size+1];
//		temp[0] = data;
//		for (size_t i = 1; i < size+1; i++)
//		{
//			temp[i] = arr[i - 1];
//		}
//		delete[]arr;
//		arr = temp;
//		temp = nullptr;
//		size++;
//	}
//	void addLast(int data)
//	{
//		int* temp = new int[size + 1];
//		for (size_t i = 0; i < size; i++)
//		{
//			temp[i] = arr[i];
//		}
//		temp[size] = data;
//		delete[]arr;
//		arr = temp;
//		temp = nullptr;
//		size++;
//	}
//	void Show()const
//	{
//		cout << "Array: ";
//		for (size_t i = 0; i < size; i++)
//		{
//			cout << arr[i]<<" ";
//		}
//		cout << endl;
//	}
//	~IntArray()
//	{
//		delete[]arr;
//	}
//};
//
//int main()
//{
//	size_t size = 10;
//	int* array = new int[size]{ 0,1,2,3,4,5,6,7,8,9 };
//	IntArray arr(array, size);
//	arr.Show();
//	//1.
//	/*arr.addFirst(11);
//	arr.Show();*/
//	//2.
//	/*arr.addLast(12);
//	arr.Show();*/
//	//3.
//	/*IntArray arr1;
//	arr1=arr;
//	arr1.Show();*/
//	//4.
//	/*arr(4,10);
//	arr.Show();*/
//	//5.
//	/*for (size_t i = 0; i < size; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout << endl;*/
//
//	return 0;
//}