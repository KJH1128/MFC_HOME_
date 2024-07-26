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

1 . ȭ�� ��� 
( 1-1  ��ü ���� , ���� �Է� , ��ü ���� , ȭ�� ��� )
�Է��� / ������ / ����� ( ��� ���׶�� ���� �ٸ��� , ���� �ؽ�Ʈ ���� �ʿ�  )








*/