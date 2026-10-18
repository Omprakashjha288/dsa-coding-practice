class Solution {
    class Arr {
        int value, index;

        Arr(int value, int index) {
            this.value = value;
            this.index = index;
        }
    }

    public int[] twoSum(int[] nums, int target) {
        Arr[] arr = new Arr[nums.length];

        for (int i = 0; i < nums.length; i++)
            arr[i] = new Arr(nums[i], i);

        Arrays.sort(arr, (a, b) -> Integer.compare(a.value, b.value));

        int l = 0, r = arr.length - 1;

        while (l < r) {
            int sum = arr[l].value + arr[r].value;

            if (sum == target)
                return new int[]{arr[l].index, arr[r].index};
            else if (sum < target)
                l++;
            else
                r--;
        }

        return new int[]{};
    }
}