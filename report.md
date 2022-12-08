Written Report File

//add all algorithms, their descriptions, what they accomplished, tests that were used to test them
--------Algorithms--------

ReadCSV Class:
    This class is used to read our csv files and represent them in a way that is easier to work with. Our ReadCSV object is used in both our BTree and Graph classes to help us create nodes.

    ReadCSV()-
        This is the default constructor for our ReadCSV file class. It doesn't output anything since it is a constructor, but it does initialize the private variables with our current twitch (pre-downloaded) csv files if no other parameters are given. The private variables it initializes are the paths to our two csv files (edges and data), the vector of pairs for our edges, the vector of all of the streamer id's and their data, the size of our dataset, and the map containing all of the streamer id's and their adjacency lists. The test case "Test Reads CSV" tests this implementation by making sure that certain data is in the correct place after reading it.
    ReadCSV(parameters)-
        This is our constructor that allows us to implement different parameters for our ReadCSV file class. It doesn't output anything since it is a constructor, but it does initialize the private variables with csv files provided in the parameters. This is where a csv file for edges and for streamer data can be added that are not the default ones (though we did not generally need this for our assignment). The private variables it initializes are the paths to our two csv files (edges and data), the vector of pairs for our edges, the vector of all of the streamer id's and their data, the size of our dataset, and the map containing all of the streamer id's and their adjacency lists. The test case "Test Reads CSV" tests this implementation by making sure that certain data is in the correct place after reading it.
    getFeatureVector()-
        This is our getter for our featureVector_ private variable. This is a double vector of strings that holds the data for each streamer_id we are working with.
    getMutuals()-
        This function constructs and returns a map that maps streamer_id's (the key), to a set of all the nodes that id is adjacent to (the value). It does this by running through our vector of pairs of our edges, and pushing mutual id's into the set of the id it is connected to. Originally we made a function that would run through this entire file every time we made a node for the BTree or the Graph, but the run time was MUCH too long, so we solved this by making a map one time, and from there we can access the edges in O(1) time for every node we create by just accessing the map. This function's output is assigned to the private variable mutualmap_ in the constructor for this object.
    fileToVecPair()-
        This function takes a csvfile of edges and converts it to a vector of pairs to return. This edges vector is later used to construct the mutualmap_ of connections.
    getSize()-
        This function returns the total size of our featureFile_ vector, which is also the amount of streamer id's that we have. This is just a simple getter to access size since we don't have access outside of the class to get private variables without this.
    getMutualMap()-
        This function returns our mutualmap_ private variable. This variable was earlier populated by getMutuals(), but since it is stored as a private variable, we don't have to rebuild the map every time we want to access the edges of our data conviniently. However, for outside classes to have access to this map, we have this getter to provide access to it.

BTree Class:
    BTreeNode()-
    BTreeNode(parameters)-
    getId()-
    getStreamerViews()-
    getLanguage()-
    setStreamerData()-
    BTree(csvfile)-
    BTree(vector)-
    getBTree()-
    MergeSort()-
    MergeVectors()-

Graph Class:
GraphNode()-
getId()-
getViews()-
getLanguage()-
setData()-
Graph()-
getGraph()-
getMap()-

Data Class:
Data()-
file_to_nested_vector()-
data_to_string()-
split_string()-
trim_right_side()-
trim_left_side()-
trim_all()-


//how was leading questions answered
--------Leading Questions--------