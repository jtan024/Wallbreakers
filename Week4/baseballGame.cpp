class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        stack<int> solution;
        int sum = 0;
        int value = 0;
        int last = 0;
        int secondlast = 0;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "+")
            {
                last = solution.top();
                solution.pop();
                secondlast = solution.top();
                solution.push(last);
                value = last + secondlast;
                solution.push(value);
                sum += value;
            }
            else if (ops[i] == "D")
            {
                value = solution.top() * 2;
                sum += value;
                solution.push(value);
            }
            else if (ops[i] == "C")
            {
                sum -= solution.top();
                solution.pop();
            }
            else
            {
                stringstream integer(ops[i]);
                integer >> value;
                sum += value;
                solution.push(value);
            }
        }
        return sum;
    }
};