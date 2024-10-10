//当在全局变量或函数前面使用 static 时，
//这个变量或函数的作用域仅限于当前定义的文件。
//这被称为“内部链接”，使得这些元素不能被其他文件引用。
static int s_var = 9; //只能在Static.cpp中使用

static void Function()
{

}