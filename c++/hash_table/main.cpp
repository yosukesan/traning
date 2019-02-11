
#include <iostream>
#include <list>

template<typename T>
class Hash
{
	size_t _key;
	std::list<T>*  _list;
	T key(const T& value){return value % _key;}

public:
	explicit Hash(const size_t& key);
	~Hash();

	void insert(const T& value);
	bool find (const T& value);
};

template<typename T>
Hash<T>::Hash(const size_t& key)
: _key(key)
{
	_list = new std::list<T>[_key];
}

template<typename T>
Hash<T>::~Hash()
{
}

template<typename T>
void Hash<T>::insert(const T& value)
{
	_list[key(value)].push_back(value);
}

template<typename T>
bool Hash<T>::find(const T& value)
{
	const size_t hash_key = key(value); 

	for (auto iter=_list[hash_key].begin();
			iter != _list[hash_key].end();
				++iter)
	{
		if ((*iter) == value)
			return true;
	}

	return false;
}

int main()
{
	Hash<int> hash(8);
	hash.insert(7);	
	hash.insert(5);	
	hash.insert(-5);	

	std::cout << hash.find(5) << std::endl;	
	std::cout << hash.find(15) << std::endl;	
}
