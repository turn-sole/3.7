class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> a;//�ṩһ��һ��hash
        vector<int> b(2, -1);//�������ؽ������ʼ��һ����СΪ2��ֵΪ-1������b
        for (int i = 0; i < nums.size(); i++)
        {
            if (a.count(target - nums[i]) > 0)
            {
                b[0] = a[target - nums[i]];
                b[1] = i;
                break;
            }
            a[nums[i]] = i;//����������map�У�������ȡ����±�
        }
        return b;
    };
};