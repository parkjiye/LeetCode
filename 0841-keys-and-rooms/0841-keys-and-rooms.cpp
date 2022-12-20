class Solution {
public:
    bool opened[1000];
    vector<vector<int>> roomlist;

    void openroom(vector<int> room)
    {
        for(int i=0;i<room.size();i++)
        {
            if(!opened[room[i]])
            {
                opened[room[i]]=true;
                openroom(roomlist[room[i]]);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        memset(opened, 0, sizeof(opened));

        for(int i=0;i<rooms.size();i++)
        {
            vector<int> keys;

            for(int j=0;j<rooms[i].size();j++)
            {                
                keys.push_back(rooms[i][j]);
            }

            roomlist.push_back(keys);
        }

        opened[0] = true;

        openroom(rooms[0]);  

        for(int i=0;i<rooms.size();i++)
        {
            cout<<opened[i]<<endl;
            if(!opened[i]) return false;
        }

        return true;
    }
};