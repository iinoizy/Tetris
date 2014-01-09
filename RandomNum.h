#pragma once
class RandomNum
{
private:
	mt19937* mt;
public:

	// Summary : �R���X�g���N�^
	RandomNum(void);

	// Summary : �f�X�g���N�^
	~RandomNum(void);

	// Summary : 0~max�܂ł̗������擾
	// Param   : int max = �ő�l
	// Returns : int�^����
	int GetRand(int max);

	// Summary : min~max�܂ł̗������擾
	// Param   : int min = �ŏ��l
	// param   : int max = �ő�l
	// Returns : int�^����
	int GetRand(int min,int max);

	// Summary : 0~max�܂ł̗������擾.�܂�,ex�Ŏw�肵�����������O
	// Param   : int max = �ő�l
	// param   : list<int> ex = ���O����I����
	// Returns : int�^����
	// Exception : max+1 <= ex.size()
	// ExReturns : -1
	int GetRand(int max,list<int> ex) throw(int);

	// Summary : min~max�܂ł̗������擾.�܂�,ex�Ŏw�肵�����������O
	// param   : int min = �ŏ��l
	// Param   : int max = �ő�l
	// Param   : list<int> ex = ���O����I����
	// Returns : int�^����
	// Exception : max+1 <= ex.size()
	// ExReturns : -1
	int GetRand(int min,int max,list<int> ex) throw(int);
};
