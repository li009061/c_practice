// 2、（结构体基本语法）
// 分析以下结构体所占的存储空间大小。假设是64位系统

// struct animals
// {
//     char dog;          -----3  
//     unsigned long cat; -----8
//     short pig;         -----2
//     char fox;          -----3
// }; 
// -----------3*8=24字节