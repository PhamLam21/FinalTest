#include<stdio.h>
#include<string.h>

const char* data = "HTTP1.1 200 OK {\"light\": \"on\", \"fan\": \"off\", \"motor\": \"off\"}";

typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;

int tim_vi_tri_chuoi(const char* str, char* key)
{
	int len1 = strlen(str);
	int len2 = strlen(key);
	for (int i = 0; i < len1; i++)
	{
		int j = 0;
		for (j=0; j < len2; j++)
		{
			if (str[i + j] != key[j])
				break;
		}
		if (j == len2)
        {
			return i + (len2 - 1);
        }
	}
	return 0;
}
char tim_trang_thai(const char* str, char* key)
{
    int k = 0;
    int vitri1 = tim_vi_tri_chuoi(str, key);
    while((*(str + vitri1) != ',') && (*(str + vitri1) != '}'))
    {
        vitri1 += 1;
        if(((str[vitri1] >= 97) && (str[vitri1] <= 122))
            || ((str[vitri1] >= 65) && (str[vitri1] <= 90)))
        {
            k++;
        }
    }
    if(k == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

smartHome_t pair_data(const char* data)
{
    smartHome_t homeX = { 0, 0, 0 };

    homeX.light = tim_trang_thai(data, "\"light\"");
    homeX.fan = tim_trang_thai(data, "\"fan\"");
    homeX.motor = tim_trang_thai(data, "\"motor\"");

    return homeX;
}

int main()
{
	smartHome_t x = pair_data(data);

	return 0;
}
