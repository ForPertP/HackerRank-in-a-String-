using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{
    /*
     * Complete the 'hackerrankInString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static string hackerrankInString(string s)
    {
        ReadOnlySpan<char> target = "hackerrank";
        int targetIndex = 0;

        foreach (char c in s)
        {
            if (targetIndex < target.Length && c == target[targetIndex])
            {
                targetIndex++;
                if (targetIndex == target.Length)
                {
                    return "YES";
                }
            }
        }

        return "NO";
    }


    public static string hackerrankInString2(string s)
    {
        Queue<char> queue = new Queue<char>("hackerrank");

        foreach (char c in s)
        {
            if (queue.Count > 0 && c == queue.Peek()) 
            {
                queue.Dequeue();
                if (queue.Count == 0)
                {
                    return "YES";
                }
            }
        }

        return "NO";
    }
}


class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int q = Convert.ToInt32(Console.ReadLine().Trim());

        for (int qItr = 0; qItr < q; qItr++)
        {
            string s = Console.ReadLine();

            string result = Result.hackerrankInString(s);

            textWriter.WriteLine(result);
        }

        textWriter.Flush();
        textWriter.Close();
    }
}
