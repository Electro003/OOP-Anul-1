#pragma once
template <class T1, class T2>
struct Pair
{
	T1 left;
	T2 right;
	int index;
};


template <class T1, class T2>
class MyIterator
{
public:
	Pair<T1,T2> *ptr;
	MyIterator& operator++();
	bool operator != (MyIterator& it);
	auto operator *();
};


template <class T1 , class T2>
class Map
{
	Pair<T1,T2> *pairs;
	int count;

public:
	Map();
	T2& operator [](T1 key);
	MyIterator<T1,T2> begin();
	MyIterator<T1,T2> end();
	bool Get(T1& key, T2& value);
	int Count();
	void Set(T1 key , T2 value);
	void Clear();
	void Delete(T1 key);
	void Exists(Pair<T1, T2> pair);
	bool Includes(const Map<T1, T2>& map);
};



template<class T1, class T2>
inline Map<T1, T2>::Map() 
{
	this->pairs = new Pair<T1, T2>[20];
	this->count = 0;
}
template<class T1, class T2>
inline T2& Map<T1, T2>::operator[](T1 key)
{
	for (int i = 0; i < count; i++)
	{
		if (pairs[i].left == key)
		{
			return pairs[i].right;
		}
	}
	pairs[this->count].left = key;
	pairs[this->count].index = this->count;
	count++;
	return pairs[count - 1].right;
}

template<class T1, class T2>
inline MyIterator<T1,T2> Map<T1, T2>::begin()
{
	MyIterator<T1, T2> aux;
	aux.ptr = &pairs[0];
	return aux;
}

template<class T1, class T2>
inline MyIterator<T1,T2> Map<T1, T2>::end()
{
	MyIterator<T1, T2> aux;
	aux.ptr = &pairs[count];
	return aux;
}

template<class T1, class T2>
inline bool Map<T1, T2>::Get(T1& key, T2& value)
{
	for (int i = 0; i < this->count; i++)
	{
		if(this->pairs[i].left == key && this->pairs[i].right == value)
			return true;
	}
	return false;
}

template<class T1, class T2>
inline int Map<T1, T2>::Count()
{
	return this->count;
}

template<class T1, class T2>
inline void Map<T1, T2>::Set(T1 key, T2 value)
{
	for (int i = 0; i < this->count; i++)
	{
		if(this->pairs[i].left == key)
		{
			this->pairs[i].right = value;
			return;
		}
	}
}

template<class T1, class T2>
inline void Map<T1, T2>::Clear()
{
	delete[] this->pairs;
	this->pairs = new Pair<T1, T2>[20];
	this->count = 0;
}

template<class T1, class T2>
inline void Map<T1, T2>::Delete(T1 key)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->pairs[i].left == key)
		{
			for (int j = i; j < this->count - 1; j++)
			{
				this->pairs[j] = this->pairs[j + 1];
			}
			this->count--;
			return;
		}
	}
}

template<class T1, class T2>
inline void Map<T1, T2>::Exists(Pair<T1, T2> pair)
{
	for (auto i : pairs)
	{
		if (i == pair)
			return true;
	}
	return false;
}

template<class T1, class T2>
inline bool Map<T1, T2>::Includes(const Map<T1, T2>& map)
{
	for (auto it : map)
	{
		if (!Exists(it))
			return false;
	}
	return true;
}

template<class T1, class T2>
inline MyIterator<T1,T2>& MyIterator<T1, T2>::operator++()
{
	this->ptr++;
	return *this;
}

template<class T1, class T2>
inline bool MyIterator<T1, T2>::operator!=(MyIterator& it)
{
	if(this->ptr->left == it.ptr->left && this->ptr->right == it.ptr->right)
	{
		return false;
	}
	return true;
}

template<class T1, class T2>
inline auto MyIterator<T1, T2>::operator*()
{
	return *this->ptr;
}
