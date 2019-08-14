from collections import OrderedDict

def get_most_frequent(List):
    return max(set(List),key = List.count) 

def dummy_predict(X_train,y_train,X_test):
    predictions=[]
    seen=OrderedDict()
    for x,y in zip(X_train,y_train):
        if x not in seen.keys():
            seen[x]=[]
            seen[x].append(y)
    for y in X_test:
        if y in seen.keys():
            predictions.append(get_most_frequent(seen[y]))
        else:
            predictions.append(y)
    return predictions

def accuracy(predictions,y_test):
    count=0
    for e,i in enumerate(predictions):
        if i == y_test[e]:
            count+=1
    return count/len(y_test)