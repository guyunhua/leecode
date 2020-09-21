#pragma once
#include<vector>
using namespace std;

struct UnionFind
{
    vector<int> ancestor;
    UnionFind(int n) {
        ancestor.resize(n);
        for (int i = 0; i < n; ++i) {
            ancestor[i] = i;
        }
    }

    int find(int index) {
        return index == ancestor[index] ? index : ancestor[index] = find(ancestor[index]);
    }

    void merge(int u, int v) {
        ancestor[find(u)] = find(v);
    }
};
class Solution685 {
public:
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        int nodescount = edges.size();
        UnionFind uf = UnionFind(nodescount + 1);
        auto parent = vector<int>(nodescount + 1);
        for (int i = 1; i <= nodescount; ++i) {
            parent[i] = i;
        }
        int conflict = -1;
        int cycle = -1;
        for (int i = 0; i < nodescount; ++i) {
            auto edge = edges[i];
            int node1 = edge[0], node2 = edge[1];
            if (parent[node2] != node2) {
                conflict = i;
            }
            else {
                parent[node2] = node1;
                if (uf.find(node1) == uf.find(node2)) {
                    cycle = i;
                }
                else
                {
                    uf.merge(node1, node2);
                }
            }
        }
        if (conflict < 0) {//
            auto redundant = vector<int>{ edges[cycle][0], edges[cycle][1] };
            return redundant;
        }
        else
        {
            auto conflictedge = edges[conflict];
            if (cycle >= 0)
                return { parent[conflictedge[0]], conflictedge[1] };
            else
                return { conflictedge[0] , conflictedge[1] };
        }
        
    }
};