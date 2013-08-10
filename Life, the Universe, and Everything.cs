using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            string str;
            while (true)
            {
                str = Console.ReadLine();
                if (str == "42") break;
                Console.WriteLine(str);
            }
        }
    }
}
