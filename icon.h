#pragma once

class icon
{

public:
	virtual void draw(CPaintDC* dc) = 0;

	icon(int x,int y) : coord(x ,y ) {};
	icon() {};
	virtual ~icon() = default;;
	CPoint coord;
	bool isSelect = false;

protected:

	

};


class input_node : public icon
{
public:
	void draw(CPaintDC* dc)
	{
		dc->Ellipse(coord.x, coord.y, coord.x + 20 , coord.y + 20);
	};

	input_node(int x , int y ) : icon(x,y)
	{
	};

	input_node(int x, int y,int z) : icon(x, y)
	{
		coord.x = z;
	};
	~input_node() {};
	


};

class hidden_node : public icon
{
public:
	void draw(CPaintDC* dc)
	{
		CPen pen;
	}

};
class output_node : public icon
{

};











/*

1 . 화면 출력 
( 1-1  객체 정의 , 개수 입력 , 객체 생성 , 화면 출력 )
입력층 / 은닉층 / 출력층 ( 모두 동그라미 색만 다르게 , 내부 텍스트 존재 필요  )








*/